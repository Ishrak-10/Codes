// RailwayTicketSystem.java
import java.lang.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;

public class RailwayTicketSystem extends JFrame implements ActionListener {
    ImageIcon trainIcon;
    JLabel trainLabel, routeLabel, priceLabel, quantityLabel, ticketHistoryLabel, searchLabel;
    JComboBox trainComboBox, routeComboBox;
    JTextField priceTF, quantityTF, searchTF;
    JTextArea ticketHistoryArea;
    JScrollPane scrollPane;
    JButton addBtn, confirmBtn, clearBtn, deleteBtn;
    JPanel panel;

    public RailwayTicketSystem() {
        super("Bangladesh Railway Ticket Management");
        this.setSize(1000, 600);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        panel = new JPanel();
        panel.setLayout(null);
        this.add(panel);

        trainIcon = new ImageIcon("Images/train.png");
        trainLabel = new JLabel(trainIcon);
        trainLabel.setBounds(20, 20, 300, 150);
        panel.add(trainLabel);

       
        trainLabel = new JLabel("Select Train:");
        trainLabel.setBounds(350, 30, 100, 25);
        panel.add(trainLabel);

        trainComboBox = new JComboBox<>(new String[]{"", "Subarna Express", "Padma Express", "Mohanagar Express"});
        trainComboBox.setBounds(450, 30, 150, 25);
        panel.add(trainComboBox);

        routeLabel = new JLabel("Select Route:");
        routeLabel.setBounds(350, 70, 100, 25);
        panel.add(routeLabel);

        routeComboBox = new JComboBox<>(new String[]{"", "Dhaka to Chittagong", "Dhaka to Sylhet", "Dhaka to Rajshahi"});
        routeComboBox.setBounds(450, 70, 150, 25);
        panel.add(routeComboBox);

        
        priceLabel = new JLabel("Ticket Price (Taka):");
        priceLabel.setBounds(350, 110, 120, 25);
        panel.add(priceLabel);

        priceTF = new JTextField();
        priceTF.setBounds(480, 110, 120, 25);
        priceTF.setEditable(false);
        panel.add(priceTF);

       
        quantityLabel = new JLabel("Quantity:");
        quantityLabel.setBounds(350, 150, 100, 25);
        panel.add(quantityLabel);

        quantityTF = new JTextField();
        quantityTF.setBounds(450, 150, 150, 25);
        panel.add(quantityTF);

  
        addBtn = new JButton("Add to Cart");
        addBtn.setBounds(350, 190, 120, 30);
        addBtn.setBackground(Color.GREEN);
        addBtn.addActionListener(this);
        panel.add(addBtn);

        confirmBtn = new JButton("Confirm Purchase");
        confirmBtn.setBounds(480, 190, 150, 30);
        confirmBtn.setBackground(Color.CYAN);
        confirmBtn.addActionListener(this);
        panel.add(confirmBtn);

        clearBtn = new JButton("Clear");
        clearBtn.setBounds(350, 230, 120, 30);
        clearBtn.setBackground(Color.ORANGE);
        clearBtn.addActionListener(this);
        panel.add(clearBtn);

        deleteBtn = new JButton("Delete Last");
        deleteBtn.setBounds(480, 230, 150, 30);
        deleteBtn.setBackground(Color.RED);
        deleteBtn.addActionListener(this);
        panel.add(deleteBtn);

      
        searchLabel = new JLabel("Search Train:");
        searchLabel.setBounds(350, 270, 100, 25);
        panel.add(searchLabel);

        searchTF = new JTextField();
        searchTF.setBounds(450, 270, 150, 25);
        panel.add(searchTF);

        searchTF.addKeyListener(new KeyAdapter() {
            public void keyReleased(KeyEvent e) {
                String text = searchTF.getText().toLowerCase();
                for (int i = 1; i < trainComboBox.getItemCount(); i++) {
                    if (trainComboBox.getItemAt(i).toLowerCase().contains(text)) {
                        trainComboBox.setSelectedIndex(i);
                        return;
                    }
                }
                trainComboBox.setSelectedIndex(0);
            }
        });

        
        ticketHistoryLabel = new JLabel("Ticket Purchase History:");
        ticketHistoryLabel.setBounds(680, 20, 200, 25);
        panel.add(ticketHistoryLabel);

        ticketHistoryArea = new JTextArea();
        ticketHistoryArea.setEditable(false);
        scrollPane = new JScrollPane(ticketHistoryArea);
        scrollPane.setBounds(680, 50, 280, 450);
        panel.add(scrollPane);

       

        this.setLocationRelativeTo(null);
		

        
        trainComboBox.addActionListener(e -> updatePrice());
        routeComboBox.addActionListener(e -> updatePrice());
    }

    private void updatePrice() {
        String train = (String) trainComboBox.getSelectedItem();
        String route = (String) routeComboBox.getSelectedItem();
        int price = 0;

        if(train.equals("Subarna Express")) {
            if(route.equals("Dhaka to Chittagong")) price = 800;
            else if(route.equals("Dhaka to Sylhet")) price = 600;
            else if(route.equals("Dhaka to Rajshahi")) price = 700;
        } else if(train.equals("Padma Express")) {
            if(route.equals("Dhaka to Chittagong")) price = 750;
            else if(route.equals("Dhaka to Sylhet")) price = 550;
            else if(route.equals("Dhaka to Rajshahi")) price = 680;
        } else if(train.equals("Mohanagar Express")) {
            if(route.equals("Dhaka to Chittagong")) price = 780;
            else if(route.equals("Dhaka to Sylhet")) price = 590;
            else if(route.equals("Dhaka to Rajshahi")) price = 710;
        }

        priceTF.setText(price > 0 ? String.valueOf(price) : "");
    }

    public void actionPerformed(ActionEvent ae) {
        String command = ae.getActionCommand();

        if(command.equals("Add to Cart")) {
            addToCart();
        } else if(command.equals("Confirm Purchase")) {
            confirmPurchase();
        } else if(command.equals("Clear")) {
            clearFields();
        } else if(command.equals("Delete Last")) {
            deleteLastEntry();
        }
    }

    private void addToCart() {
        String train = (String) trainComboBox.getSelectedItem();
        String route = (String) routeComboBox.getSelectedItem();
        String price = priceTF.getText();
        String quantityStr = quantityTF.getText();

        if(train.equals("") || route.equals("") || price.equals("") || quantityStr.isEmpty()) {
            JOptionPane.showMessageDialog(this, "Please select train, route and enter quantity.");
            return;
        }

        int quantity;
        try {
            quantity = Integer.parseInt(quantityStr);
            if(quantity <= 0) {
                JOptionPane.showMessageDialog(this, "Quantity must be positive number.");
                return;
            }
        } catch(NumberFormatException e) {
            JOptionPane.showMessageDialog(this, "Invalid quantity.");
            return;
        }

        TicketInfo ticket = new TicketInfo(train, route, Integer.parseInt(price), quantity);

        try {
            FileWriter writer = new FileWriter("TicketData.txt", true);
            writer.write(ticket.getTrain() + ", " + ticket.getRoute() + ", " + ticket.getPrice() + ", " + ticket.getQuantity() + ", " + ticket.getTotalPrice() + "\n");
            writer.close();
            JOptionPane.showMessageDialog(this, "Added to cart.");
            clearFields();
        } catch(IOException e) {
            e.printStackTrace();
        }
    }

    private void confirmPurchase() {
        try {
            BufferedReader reader = new BufferedReader(new FileReader("TicketData.txt"));
            String line;
            StringBuilder history = new StringBuilder();
            int count = 1;

            while((line = reader.readLine()) != null) {
                String[] parts = line.split(",");
                if(parts.length >= 5) {
                    history.append("Ticket #").append(count++).append("\n");
                    history.append("Train: ").append(parts[0].trim()).append("\n");
                    history.append("Route: ").append(parts[1].trim()).append("\n");
                    history.append("Price: ").append(parts[2].trim()).append(" Taka\n");
                    history.append("Quantity: ").append(parts[3].trim()).append("\n");
                    history.append("Total: ").append(parts[4].trim()).append(" Taka\n");
                    history.append("-------------------------\n");
                }
            }

            reader.close();
            ticketHistoryArea.setText(history.toString());
        } catch(IOException e) {
            e.printStackTrace();
        }
    }

    private void clearFields() {
        trainComboBox.setSelectedIndex(0);
        routeComboBox.setSelectedIndex(0);
        priceTF.setText("");
        quantityTF.setText("");
        searchTF.setText("");
    }

    private void deleteLastEntry() {
        try {
            FileReader fr = new FileReader("TicketData.txt");
            BufferedReader br = new BufferedReader(fr);
            String line;
            java.util.ArrayList<String> lines = new java.util.ArrayList<>();
            while((line = br.readLine()) != null) {
                lines.add(line);
            }
            br.close();

            if(lines.size() == 0) {
                JOptionPane.showMessageDialog(this, "No entries to delete.");
                return;
            }

            lines.remove(lines.size() - 1);

            FileWriter fw = new FileWriter("TicketData.txt");
            for(String l : lines) {
                fw.write(l + "\n");
            }
            fw.close();

            JOptionPane.showMessageDialog(this, "Last entry deleted.");
            confirmPurchase();
        } catch(IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        RailwayTicketSystem frame = new RailwayTicketSystem();
        frame.setVisible(true);
    }
}

}
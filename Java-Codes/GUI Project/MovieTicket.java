import java.lang.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;

public class MovieTicket extends JFrame implements ActionListener, MouseListener
{
	ImageIcon img1, img2, img3, img4;
	JLabel movie1Label, movie2Label, movie3Label, movie4Label;
	JLabel imgLabel1, imgLabel2, imgLabel3, imgLabel4;
	JLabel movie1PriceLabel, movie2PriceLabel, movie3PriceLabel, movie4PriceLabel;
	JLabel movie1VipPriceLabel, movie2VipPriceLabel, movie3VipPriceLabel, movie4VipPriceLabel;
	JTextField movie1TF, movie2TF, movie3TF, movie4TF;
	JTextArea purchaseHistoryArea;
	JButton clearBtn, cartBtn, purchaseBtn, deleteLastBtn;
	JScrollPane scrollPane;
	JPanel panel;
	JLabel ticketTypeLabel;
	JComboBox<String> ticketTypeCombo;

	public MovieTicket()
	{
		super("Movie Ticket Management");
		this.setSize(1200, 700);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		panel = new JPanel();
		panel.setLayout(null);
 
 
		img1 = new ImageIcon("Images/m1.jpg");
		imgLabel1 = new JLabel(img1);
		imgLabel1.setBounds(10, 10, 200, 150);
		panel.add(imgLabel1);

		movie1Label = new JLabel("Paglu");
		movie1Label.setBounds(220, 10, 150, 30);
		panel.add(movie1Label);

		movie1TF = new JTextField();
		movie1TF.setBounds(220, 40, 100, 30);
		panel.add(movie1TF);

		movie1PriceLabel = new JLabel("Price: 200 Taka");
		movie1PriceLabel.setBounds(220, 70, 150, 30);
		panel.add(movie1PriceLabel);
		
		movie1VipPriceLabel = new JLabel("VIP Price: 400 Taka");
        movie1VipPriceLabel.setBounds(220, 100, 150, 30);
        panel.add(movie1VipPriceLabel);


	
		img2 = new ImageIcon("Images/m2.jpg");
		imgLabel2 = new JLabel(img2);
		imgLabel2.setBounds(10, 180, 200, 150);
		panel.add(imgLabel2);

		movie2Label = new JLabel("Zootopia");
		movie2Label.setBounds(220, 180, 150, 30);
		panel.add(movie2Label);

		movie2TF = new JTextField();
		movie2TF.setBounds(220, 210, 100, 30);
		panel.add(movie2TF);

		movie2PriceLabel = new JLabel("Price: 180 Taka");
		movie2PriceLabel.setBounds(220, 240, 150, 30);
		panel.add(movie2PriceLabel);
		
		movie2VipPriceLabel = new JLabel("VIP Price: 360 Taka");
        movie2VipPriceLabel.setBounds(220, 270, 150, 30);
        panel.add(movie2VipPriceLabel);

	
		img3 = new ImageIcon("Images/m3.jpg");
		imgLabel3 = new JLabel(img3);
		imgLabel3.setBounds(10, 350, 200, 150);
		panel.add(imgLabel3);

		movie3Label = new JLabel("Interstellar");
		movie3Label.setBounds(220, 350, 150, 30);
		panel.add(movie3Label);

		movie3TF = new JTextField();
		movie3TF.setBounds(220, 380, 100, 30);
		panel.add(movie3TF);

		movie3PriceLabel = new JLabel("Price: 220 Taka");
		movie3PriceLabel.setBounds(220, 410, 150, 30);
		panel.add(movie3PriceLabel);
		
		movie3VipPriceLabel = new JLabel("VIP Price: 440 Taka");
        movie3VipPriceLabel.setBounds(220, 440, 150, 30);
        panel.add(movie3VipPriceLabel);



		img4 = new ImageIcon("Images/m4.png");
		imgLabel4 = new JLabel(img4);
		imgLabel4.setBounds(10, 520, 200, 150);
		panel.add(imgLabel4);

		movie4Label = new JLabel("Spider-Man");
		movie4Label.setBounds(220, 520, 150, 30);
		panel.add(movie4Label);

		movie4TF = new JTextField();
		movie4TF.setBounds(220, 550, 100, 30);
		panel.add(movie4TF);

		movie4PriceLabel = new JLabel("Price: 250 Taka");
		movie4PriceLabel.setBounds(220, 580, 150, 30);
		panel.add(movie4PriceLabel);
		
		movie4VipPriceLabel = new JLabel("VIP Price: 500 Taka");
        movie4VipPriceLabel.setBounds(220, 610, 150, 30);
        panel.add(movie4VipPriceLabel);
		
		ticketTypeLabel = new JLabel("Choose Your Ticket Type: ");
		ticketTypeLabel.setBounds(400, 70, 150, 30);
		panel.add(ticketTypeLabel);
		
		ticketTypeCombo = new JComboBox<>(new String[]{"Economy", "VIP"});
        ticketTypeCombo.setBounds(400, 100, 150, 30);
        panel.add(ticketTypeCombo);

		

		clearBtn = new JButton("Clear");
		clearBtn.setBounds(400, 200, 150, 30);
		clearBtn.addActionListener(this);
		panel.add(clearBtn);

		cartBtn = new JButton("Add To Cart");
		cartBtn.setBounds(400, 240, 150, 30);
		cartBtn.addActionListener(this);
		panel.add(cartBtn);

		purchaseBtn = new JButton("Confirm Purchase");
		purchaseBtn.setBounds(400, 280, 150, 30);
		purchaseBtn.addActionListener(this);
		panel.add(purchaseBtn);
		
		deleteLastBtn = new JButton("Delete Last Entry");
        deleteLastBtn.setBounds(400, 320, 150, 30);
        deleteLastBtn.addActionListener(this);
        panel.add(deleteLastBtn);



		purchaseHistoryArea = new JTextArea();
		purchaseHistoryArea.setEditable(false);
		scrollPane = new JScrollPane(purchaseHistoryArea);
		scrollPane.setBounds(600, 20, 550, 620);
		panel.add(scrollPane);

		this.add(panel);
		this.setLocationRelativeTo(null);
	}

	public void actionPerformed(ActionEvent ae)
	{
		String command = ae.getActionCommand();

		if(cartBtn.getText().equals(command))
		{
			addToCart();
		}
		else if(purchaseBtn.getText().equals(command))
		{
			purchase();
		}
		else if(clearBtn.getText().equals(command))
		{
			clearFields();
		}
		else if(deleteLastBtn.getText().equals(command))
        {
	        deleteLastEntry();
        }

	}

	public void mouseClicked(MouseEvent me){}
	public void mousePressed(MouseEvent me){}
	public void mouseReleased(MouseEvent me){}
	public void mouseEntered(MouseEvent me){}
	public void mouseExited(MouseEvent me){}

	private void addToCart()
	{
		String m1 = movie1TF.getText();
		String m2 = movie2TF.getText();
		String m3 = movie3TF.getText();
		String m4 = movie4TF.getText();
		
		if (!isValidInput(m1) || !isValidInput(m2) || !isValidInput(m3) || !isValidInput(m4))
		{
	       JOptionPane.showMessageDialog(this, "Please enter only non-negative numbers in the ticket fields.");
	       return;
        }


		if(m1.isEmpty() && m2.isEmpty() && m3.isEmpty() && m4.isEmpty())
		{
			JOptionPane.showMessageDialog(this, "Please enter at least one ticket quantity.");
			return;
		}

		String ticketType = (String) ticketTypeCombo.getSelectedItem();
        Info newInfo = new Info(m1, m2, m3, m4, ticketType);

	
		try
		{
			FileWriter writer = new FileWriter("PurchaseData.txt", true);
			writer.write("Paglu, " + newInfo.getM1() + ", Zootopia, " + newInfo.getM2() + ", Interstellar, " + 
			newInfo.getM3() + ", Spider-Man, " + newInfo.getM4() +", Ticket Type, " +
			ticketType + ", Total price, " + newInfo.getTotalPrice() + "\n");

			writer.close();
			JOptionPane.showMessageDialog(this, "Tickets added to cart.");
		}
		catch(IOException ex)
		{
			ex.printStackTrace();
		}
	}

	private void purchase()
	{
		try
		{
			BufferedReader reader = new BufferedReader(new FileReader("PurchaseData.txt"));
			String line;
			StringBuilder content = new StringBuilder();
			int customerCount = 1;

			while((line = reader.readLine()) != null)
			{
				String[] parts = line.split(",");

				if(parts.length >= 11)
				{
					content.append("------------------------------ \n");
					content.append("Customer ").append(customerCount++).append("\n");
					content.append("Paglu: ").append(parts[1].trim()).append("\n");
					content.append("Zootopia ").append(parts[3].trim()).append("\n");
					content.append("Interstellar: ").append(parts[5].trim()).append("\n");
					content.append("Spider-Man: ").append(parts[7].trim()).append("\n");
					content.append("Ticket Type: ").append(parts[9].trim()).append("\n");
                    content.append("Total Price: ").append(parts[11].trim()).append("\n");
                    content.append("------------------------------ \n");
				}
			}

			reader.close();
			purchaseHistoryArea.setText(content.toString());
		}
		catch(IOException ex)
		{
			ex.printStackTrace();
		}
		clearFields();
	}

	private void clearFields()
	{
		movie1TF.setText("");
		movie2TF.setText("");
		movie3TF.setText("");
		movie4TF.setText("");
	}
	private boolean isValidInput(String input) 
	{
	if (input == null || input.isEmpty()) 
		return true;
	try 
	{
		int value = Integer.parseInt(input);
		return value >= 0;
	} 
	catch (NumberFormatException e) 
	{
		return false;
	}
    }

	
	private void deleteLastEntry()
    {
	    File inputFile = new File("PurchaseData.txt");
	    File tempFile = new File("TempPurchaseData.txt");

	try (
		BufferedReader reader = new BufferedReader(new FileReader(inputFile));
		PrintWriter writer = new PrintWriter(new FileWriter(tempFile));
	) {
		String line;
		String lastLine = null;

		while ((line = reader.readLine()) != null) {
			if (lastLine != null) {
				writer.println(lastLine);
			}
			lastLine = line;
		}
	} catch (IOException e) {
		e.printStackTrace();
	}

	if (inputFile.delete()) {
		if (tempFile.renameTo(inputFile)) {
			JOptionPane.showMessageDialog(this, "Last entry deleted.");
			purchase();
		}
	} 
}

}

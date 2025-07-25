// TicketInfo.java
import java.lang.*;
import java.io.*;

public class TicketInfo {
    private String train;
    private String route;
    private int price;
    private int quantity;
    private int totalPrice;

    public TicketInfo(String train, String route, int price, int quantity) {
        this.train = train;
        this.route = route;
        this.price = price;
        this.quantity = quantity;
        this.totalPrice = price * quantity;
    }

    public String getTrain() { return train; }
    public String getRoute() { return route; }
    public int getPrice() { return price; }
    public int getQuantity() { return quantity; }
    public int getTotalPrice() { return totalPrice; }
}

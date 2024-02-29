import java.net.*;

class chatServer {
  public static void main(String[] args) {

    try {

      ServerSocket ss = new ServerSocket(6666);
      System.out.println("Server is listening on port 6666.");
      Socket s = ss.accept();
      System.out.println("Client connected.");
      KeyExchange.performServerKeyExchange(s);

    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
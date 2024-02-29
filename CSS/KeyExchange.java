import java.io.*;
import java.net.*;

public class KeyExchange {

  public static void performServerKeyExchange(Socket s) throws Exception {
    int primeNumber = 11; // P
    int primitiveRoot = 7; // G
    int privatekey = 3;
    int publickey = (int) Math.pow(primitiveRoot, privatekey) % primeNumber; // x

    ObjectOutputStream out = new ObjectOutputStream(s.getOutputStream());
    out.writeInt(primeNumber);
    out.writeInt(primitiveRoot);
    out.writeInt(publickey);
    out.flush();

    ObjectInputStream in = new ObjectInputStream(s.getInputStream());
    int bobPublicKey = in.readInt();
    int sharedSecretKey = (int) Math.pow(bobPublicKey, privatekey) % primeNumber; // ka
    System.out.println("Shared secret key: " + sharedSecretKey);
    out.close();
    in.close();
  }

public static void performClientKeyExchange (Socket s) throws Exception {

  ObjectInputStream in = new ObjectInputStream(s.getInputStream());
  int primeNumber = in.readInt();
  int primitiveRoot = in.readInt();
  int alicePublicKey = in.readInt();
  int privateKey = 6; // b

  int publickey = (int) Math.pow(primitiveRoot, privateKey) % primeNumber; // y
    
  ObjectOutputStream out = new ObjectOutputStream(s.getOutputStream());
  out.writeInt(publickey);
  out.flush();  
  int sharedSecretKey = (int) Math.pow(alicePublicKey, privateKey) % primeNumber; // kb  
  System.out.println("Shared secret key: " + sharedSecretKey);
    
  out.close();
  in.close();
  }
}
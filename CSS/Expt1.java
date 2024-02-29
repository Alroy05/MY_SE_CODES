import java.util.Scanner;

public class Expt1 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the plain text for Vernam cipher: ");
    String verPT = sc.nextLine();

    System.out.print("Enter the key for Vernam: ");
    String verKey = sc.nextLine();

    String verET = verEncypt(verPT.toUpperCase(),verKey.toUpperCase());

    System.out.println("Vernam ET: " + verET);

    System.out.print("Enter the key for Row Transposition: ");
    String rowKey = sc.nextLine();

    String combinedEncryptedText = rowEncypt(verET,rowKey);
    System.out.println("Combined ET: " +combinedEncryptedText);
    sc.close();
  }

  public static String verEncypt(String text, String key) {
    String cipherText = "";
    int cipher[] = new int[key.length()];
    for (int i = 0; i < key.length(); i++) {
      cipher[i] = text.charAt(i) - 'A' + key.charAt(i) - 'A';
    }
    for (int i = 0; i < key.length(); i++) {
      if (cipher[i] > 25) {
        cipher[i] = cipher[i] - 26;
      }
    }
    for (int i = 0; i < key.length(); i++) {
      int x = cipher[i] + 'A';
      cipherText += (char) x;
    }
    return cipherText;
  }

  public static String rowEncypt(String plaintext, String key) {
    int[] order = new int[key.length()];
    for (int i = 0; i < key.length(); i++) {
      order[i] = Character.getNumericValue(key.charAt(i)) - 1;
    }
    int numRows = (int) Math.ceil((double) plaintext.length() / key.length());
    char[][] grid = new char[numRows][key.length()];
    int index = 0;
    for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < key.length(); j++) {
        if (index < plaintext.length()) {
          grid[i][j] = plaintext.charAt(index++);
        } else {
          grid[i][j] = 'X';
        }
      }
    }
    StringBuilder ET = new StringBuilder();
    for (int col : order) {
      for (int row = 0; row < numRows; row++) {
        ET.append(grid[row][col]);
      }
    }
    return ET.toString();
  }
}

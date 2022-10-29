import java.util.*;

class ShopItems
{   
    Scanner sc = new Scanner(System.in);
    void itemList()
    {   
        abc:while(true)
        {
        System.out.println("Enter the item to be added\n1.Cabbage\n2.Onion\n3.Potato\n4.Tomatoes\n5.Carrot\n6.Exit");
        int option = sc.nextInt();
        switch(option)
        {
            case 1:
            add("Cabbage",40); 
            break;

            case 2:
            add("Onion",20);
            break;

            case 3:
            add("Potato",25);
            break;

            case 4:
            add("Tomatoes",50);
            break;

            case 5:
            add("Carrot",70);
            break;

            case 6:
            break abc;
         }
        }
    }

    void itemListR()
    {   
        System.out.println("Items in the list are:\n"+v);
        xyz:while(true)
        {
        System.out.println("Enter the item to be removed\n1.Cabbage\n2.Onion\n3.Potato\n4.Tomatoes\n5.Carrot\n6.Exit");
        int option = sc.nextInt();
        switch(option)
        {
            case 1:
            remove("Cabbage",40); 
            
            break;

            case 2:
            remove("Onion",20);
            break;

            case 3:
            remove("Potato",25);
            break;

            case 4:
            remove("Tomatoes",50);
            break;

            case 5:
            remove("Carrot",70);
            break;

            case 6:
            break xyz;
         }
        }
    }

    Vector v = new Vector();
    Vector v1 = new Vector();
    void add(String str,int price)
    {
       v.add(str);
       v1.add(price);
    }

    void remove(String str,int price)
    {
        if(v.contains(str)==true)
        v.remove(str);
        v1.remove(price);
    }
}

class Shop extends ShopItems
{
    Scanner sc = new Scanner(System.in);
    void Menu()
    {
      def:while(true)
      {
      System.out.println("Press\n1.Add items\n2.Remove items\n3.Display List\n4.Exit");
      int choice = sc.nextInt();
      switch(choice)
      {
        case 1:
          itemList();
          break;
        case 2:
          itemListR();
          break;
        case 3:
          System.out.println("Items are:\n"+v+v1);
          break;
        case 4:
          System.out.println("Thanking for shopping with us!");
          break def;
      }
      }
    }
}

class postLab1 {
    public static void main(String[] args) {
        System.out.println("Welcome to TESCO");
           Shop s = new Shop();
           s.Menu();    
    }
}

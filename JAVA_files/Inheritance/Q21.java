import java.util.*;

class Publication
{
    String title;
    double price;
}

class Book extends Publication
{
    int pagecount;
    void getdata()
    {
        System.out.println("ENTER THE NAME OF THE BOOK,PRICE AND PAGE COUNT");
        Scanner sc = new Scanner(System.in);
        title = sc.nextLine();
        price = sc.nextDouble();
        pagecount = sc.nextInt();
    }

    void putdata()
    {
        System.out.println("Title: "+title);
        System.out.println("Price: "+price);
        System.out.println("Page Count: "+pagecount);
    }
}

class Audio extends Publication
{
    double time;
    void getdata()
    {
        System.out.println("ENTER THE NAME OF THE AUDIO,PRICE AND TIME");
        Scanner sc = new Scanner(System.in);
        title = sc.nextLine();
        price = sc.nextDouble();
        time = sc.nextDouble();
    }

    void putdata()
    {
        System.out.println("Title: "+title);
        System.out.println("Price: "+price);
        System.out.println("PlayTime: "+time);
    }
}

class Q21
{
    public static void main(String[] args) {
        Book b = new Book();
        Audio a = new Audio();
        b.getdata();
        a.getdata();
        b.putdata();
        a.putdata();
    }
}

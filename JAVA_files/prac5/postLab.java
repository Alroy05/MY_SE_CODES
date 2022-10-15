import java.util.*;

abstract class Instrument{
    abstract void play();
}

class Piano extends Instrument{
    void play()
    {
        System.out.println(" Piano is playing tan tan tan tan");
    }
}

class Flute extends Instrument{
    void play()
    {
        System.out.println(" Flute is playing toot toot toot toot");
    }
}

class Guitar extends Instrument{
    void play()
    {
        System.out.println(" Guitar is playing tin tin tin tin");
    }
}

class postLab{
    public static void main(String[] args) {
        Instrument in[] = new Instrument[10];

        in[0] = new Piano();
        in[1] = new Piano();
        in[2] = new Piano();
        in[3] = new Piano();

        in[4] = new Flute();
        in[5] = new Flute();
        in[6] = new Flute();

        in[7] = new Guitar();
        in[8] = new Guitar();
        in[9] = new Guitar();

        for(int i = 0;i<4;i++)
        {
           System.out.print(i);
           in[i].play(); 
        }

        for(int i = 4;i<7;i++)
        {
           System.out.print(i);
           in[i].play();
        }

        for(int i = 7;i<10;i++)
        {
           System.out.print(i);
           in[i].play();
        }
    }
}

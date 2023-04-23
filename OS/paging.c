#include<stdio.h>

int main()
{
      int reference_string[30], page_faults = 0, m, n, s, pages, frames,page_hits;
      printf("\n Enter Total Number of Pages : ");
      scanf("%d", &pages);
      printf("\n Enter the Values of the Reference String : \n");
      for(m = 0; m < pages; m++)
      {
            printf(" Value No. [%d] : ", m + 1);
            scanf("%d", &reference_string[m]);
      }
      printf("\n Enter Total Number of Frames : ");
      {
            scanf("%d", &frames);
      }
      int temp[frames];
      for(m = 0; m < frames; m++)
      {
            temp[m] = -1;
      }
      for(m = 0; m < pages; m++)
      {
            s = 0;
            for(n = 0; n < frames; n++)
            {

                  if(reference_string[m] == temp[n])
                  {
                        s++;
                        page_faults--;
                  }
            }
            page_faults++;
            if((page_faults <= frames) && (s == 0))
            {
                  temp[m] = reference_string[m];
            }
            else if(s == 0)
            {
                  temp[(page_faults - 1) % frames] = reference_string[m];
            }
            printf("\n");
            for(n = 0; n < frames; n++)
            {
                  printf("%d\t", temp[n]);
            }
      }
      page_hits =  pages - page_faults;
      printf("\n Total Page Hits : %d\n", page_hits);
      printf("\n Total Page Miss : %d\n", page_faults);

      printf("\n Page Hit Ratio : %f\n", (double)page_hits/pages);
      printf("\n Page Miss Ratio : %f\n",(double) page_faults/pages);
      return 0;
}

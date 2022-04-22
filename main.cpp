#include <iostream>

int fenceLenght;

void showLenght(int howMany);
void bubbleSort(int *tab, int n);
int searchInTabs(int wanted, int *tab, int till);


int main() {
    std::cout << "Enter length of fance: ";
    std::cin>>fenceLenght;
    showLenght(fenceLenght);
    return 0;
}

void showLenght(int howMany)
{
    int i = 1;                                              //counter

    int *lenghtA;
    lenghtA =new int[howMany];
    int *lenghtB;
    lenghtB =new int[howMany];
    int *area;
    area =new int[howMany];
    int *area2;
    area2 = new int [howMany];

    while ((howMany-2*i)>0)
    {
        lenghtA[i] = i;
        lenghtB[i] = howMany-2*i;
        area[i] = lenghtA[i] * lenghtB[i];
        /*
        std::cout<<i<<". "<<
                 "a= "<<lenghtA[i]<<" "<<
                 "b= "<<lenghtB[i]<<" "<<
                 "P= "<<area[i]<<std::endl;
                 */
        i++;
    }
    for (int j = 1; j < i; ++j) {
        area2[j] = area[j];
        //std::cout<<6<<". "<<area2[j]<<std::endl;
    }
    bubbleSort(area, i);
    int c = searchInTabs(area[i-1], area2, i);

    std::cout<<"Segment A= "<<lenghtA[c]<<std::endl;
    std::cout<<"Segment B= "<<lenghtB[c]<<std::endl;
    std::cout<<"Area= "<<area[i-1]<<std::endl;

}

int searchInTabs(int wanted, int *tab, int till)
{
    for (int d=0; d<till; d++)
    {
        if (tab[d]==wanted)
        {

            //searching for a value index
            return d;

        }
    }
}

void bubbleSort(int *tab, int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=n-1; j>=1; j--)
        {
            if(tab[j]<tab[j-1])
            {
                int bufor;
                bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}
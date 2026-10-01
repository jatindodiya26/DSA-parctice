#include<bits/stdc++.h>
// #include<conio.h>

using namespace std;
const int m=50;

class items{
    int itemcode[m];
    int itemprice[m];

    public:

    void CNT(){
      int  count=0;
    }
    void getitem();
    void displaysum();
    void remove();
    void displayitems();
};

void items::getitem(){

    cout<<"enter item code\n";
    cin>>itemcode[count];

    cout<<"entrer item cost\n";
    cin>>itemprice[count];
    count++;

}

void items::displaysum(){

    float sum=0;

    for (int i=0; i<count ; i++){

        sum+=itemprice[i];

        cout<<"total value : "<<sum <<endl;

    }
}

void items::remove{

    int a;
    cout<<"enter item code : ";
    cin>>a;

    for(int i=0; i<count; i++){

        if(itemcode[i]==a)
                itemprice[i]=0;
    }
}


void items::displayitems(){

    cout<<"\n code price: ";
    
    for(int i=0; i<count; i++){
        cout<<endl<<itemcode[i]<<endl;
        cout<<endl<<itemprice[i]<<endl;
    }
        cout<<endl;
}


//==============================================================================//

int main(){

    item i;
    i.CNT();
    int x;
    do{

        cout<<"you can do the following \n";
        cout<<"enter appropriate no : "<<endl;

        cout<<"\n1 add an item : ";
        cout<<"\n2 display total value : ";
        cout<<"\n3 delete azn item : ";
        cout<<"\n4 display all items : ";
        cout<<"\n5 quit : ";

        cout<<"\n what is your option: ";

        cin>>x;

        switch (x){
            case 1:
                   i.getitem();
                    break;

         case 2:
               i.displaysum();
               break;

        case 3:
              i.remove();
              break;

        case 4:
             i.displayitems();
             break;

        case 5:
             break;

        default:
            cout<<"errror in input"<<" "<<"try again\n";


        }

    }
    while(x!=5);

    return 0;




    }
    









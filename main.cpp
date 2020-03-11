#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int a,temp;


    cout << "Enter the number of items to be sorted:";
    cin >> a;
    int arr[a];

    for (int h = 0; h < a; h++){
        cout<< "Enter the number: ";
        cin >> arr[h];
    }
    cout<<endl;

    for(int q=0;q<a-1;q++){
        for(int w=0;w<a-1;w++){
            if(arr[w]>arr[w+1]){
                temp = arr[w];
                arr[w]=arr[w+1];
                arr[w+1]=temp;
            }

        }
    }

    cout<< "Sorted Array: [";
    for(int i=0;i<a;++i){
        cout<< " " << arr[i];
    }
    cout<<" ]"<<endl;






    system("pause");
    return 0;
}

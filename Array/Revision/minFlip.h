/*
author : gulshan yadav
date : 19-NOV-2020
*/

void  minFlip(int arr[], int num){
    for(int i = 1; i< num; i++){
        if(arr[i] != arr[i-1]){
            if(arr[i] != arr[0]){
                cout << "from "<< i << "to"<<" "; 
            }
            else {
                cout << (i-1)<<endl;
            }
        }
    }
    if(arr[num-1] != arr[0]){
        cout << (num-1)<< endl;
    }
}
return 0; 
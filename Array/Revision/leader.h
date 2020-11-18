void leader(int arr[], int num){
    int currLead = arr[num-1]; 
    cout << currLead<< " "; 

    for(int i = num-2; i>= 0; i--){
        if(currLead< arr[i]) { 
            currLead = arr[i]; 
            cout << currLead << " ";;
            
            

        }
    }
}
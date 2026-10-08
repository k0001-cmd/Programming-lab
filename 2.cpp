//2) TAKE AN ARRAY AS AN INPUT AND ALSO TAKE A TARGET FROM THE USER AND THERE HAS TO BE ONE PAIR PRESENT WHOSE SUM IS THE TARGET

class trg
{
	public :
		int arr[10];
		
		trg(int a)
		{
			 for(int i=0;i<10;i++)
             arr[i]=a[i];
		}
};

void sort(trg obj)
{
	int temp;
	for(int i=0;i<10-1;i++)
	{
		for(int j=0;j<10-1-i;j++)
		{
			temp = obj.arr[j];
			obj.arr[j]=obj.arr[j+1];
			obj.arr[j+1]=temp; 
		}
	}
}

void tartar(trg obj,int target)
{
	int sum=0;
	/* while l<r
	 {
	 sum=arr[l]+arr[r];
	 if(sum>t)
	 r--;
	 if(sum<t)
	 l++;
	}*/
}
int main()
{
	  int ar[10];   
    cout <<"Enter elements"<<endl;
    for(int i=0;i<10;i++)
    cin >>ar[i];
    arrr obj(ar);
    
    int target;
    cout <<"Enter target"<<endl;
    cin>>target;
    
    sort(obj);
    tartar(obj,target);
}

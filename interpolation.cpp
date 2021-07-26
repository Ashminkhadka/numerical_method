#include<iostream>
using namespace std;
int main()
{
	 float x[100], y[100], xu, yu=0, u;
	 int i,j,n;
	 cout<<"Enter number of data: ";
	 cin>>n;
	 cout<<"Enter data:"<< endl;
	 for(i=1;i<=n;i++)
	 {
		  cout<<"x["<< i<<"] = ";
		  cin>>x[i];
		  cout<<"y["<< i<<"] = ";
		  cin>>y[i];
	 }
	 cout<<"Enter interpolation point: ";
	 cin>>xu;
	 for(i=1;i<=n;i++)
	 {
		  u=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	u = u* (xu - x[j])/(x[i] - x[j]);
			   }
		  }
		  yu = yu + u * y[i];
	 }
	 cout<< endl<<"Interpolated value at "<< xu<< " is "<< yu;

	 return 0;
}

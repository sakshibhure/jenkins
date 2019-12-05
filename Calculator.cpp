int main()
{
	char a;
	float num1,num2;
	
	cout<<"enter operator + or - or * or /"<<endl;
	cin>>a;
	
	cout<<"enter two operands"<<endl;
	cin>>num1>>num2;

	switch(a)
	{
	case '+':
		cout<<num1+num2;
		break;
	
	case '-':
		cout<<num1-num2;
		break;

	case '*':
		cout<<num1*num2;
		break;

	case '/':
		cout<<num1/num2;
		break;

	default:
		cout<<"correct operator is not selected";
		break;
	}
	

return 0;
}

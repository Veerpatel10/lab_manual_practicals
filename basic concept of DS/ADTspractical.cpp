#include<iostream>
using namespace std;
class arr
{
private:
    int total_s;
    int use_s;
    int* ptr;
public:
    arr(int ts, int us)
    {
        total_s = ts;
        use_s = us;
        ptr = new int[total_s];
    }
    void show()
    {
        for (int i = 0; i < use_s; i++)
        {
            cout<<ptr[i];
        }

    }
    void set()
    {
        // int n;
        for (int i = 0; i < use_s; i++)
        {
            cout<<"Enter the number on index number"<<i;
            cin>>ptr[i];
            // n = (a->ptr)[i];
        }

    }
    void insert(int &b)
    {
        int b1;
        cout<<"Enter the number to insert : ";
        cin>>b1;
        ptr[b]=b1;
    }
};

int main()















{
    int b;
    arr a1(2,2);
    a1.set();
    cout<<"enter the index :";
    cin>>b;
    a1.insert(b);
    a1.show();
    return 0;
}
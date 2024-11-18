#include <iostream>

using namespace std;

class Youtubechannel            //base class
{
private:
    string Name;
    int subcount;
protected:
    string Owner;
    public:
    Youtubechannel(string name,string owner)
    {
        this->Name=name;
        this->Owner=owner;
    }
    void getinfo()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"Owner: "<<Owner<<endl;
        cout<<"subcount: "<<subcount<<endl;
    }
    void subscribe()
    {
        subcount++;
    }
    void unsubscribe()
    {
        if(subcount>0)
        subcount--;
    }
};

class Tradingchannel:public Youtubechannel            //derived class
{
    public:
    Tradingchannel(string name, string owner):Youtubechannel(name,owner)
    {

    }
    void portfolio()
    {
            cout<<Owner <<" made today 5 lakh profit"<<endl;
    }

};

int main()
{
    Tradingchannel tc1("trade with aadi","aditya");
    Tradingchannel tc2("trade with chichi","chetan");
    tc1.subscribe();
    tc1.unsubscribe();
    tc1.subscribe();
    tc2.subscribe();
     tc2.subscribe();
    tc1.getinfo();
    tc2.getinfo();
    tc1.portfolio();
    tc2.portfolio();


return 0;
}

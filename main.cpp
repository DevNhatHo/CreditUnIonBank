#include <iostream>
#include <string>
using std::string;



class bankOutline{
private:
    int value;
    string acountNumber;/* data */
public:
    void setvalue(int s){
        value = s;
    }
    void setAcountNUm(string name){
        acountNumber = name;
    }

    int getValue(){
        return value;
    }

    string getAcountNUm(){
        return acountNumber;
    }
    
};



    


int main() {
   std::cout << "BANK APP" << std::endl; // This prints Hello, World!
   bankOutline Chase;
   Chase.setvalue(200000001);
   Chase.setAcountNUm("BeeHo");
   std::cout<<"account name : " << Chase.getAcountNUm()<< std::endl;
   std::cout<<"VALUE :  "<<Chase.getValue()<< std::endl;
   Chase.getValue();

   return 0;
}

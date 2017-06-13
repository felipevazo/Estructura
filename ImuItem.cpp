include <iostream>
using namespace std;
class ImuItem:public SensorItem()
{
  public:
  {
    ImuItem(datax,datay,dataz):SensorItem();
    void print()
    {
      cout<<("("+datax+","+datay+","+dataz+")");  
    }
    vector<int> getData()
    {
      int vector[3]={datax,datay,dataz};
      return vector;
    }
  }
  
  
  
  protected:
  {
    int datax;
    int datay;
    int dataz;
  }
}

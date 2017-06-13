include <iostream>
using namespace std;
class RtcItem:public SensorItem()
{
  public:
  
    RtcItem(data):SensorItem()
    
    void print()
    {
      cout<<data;
    }
    time_t getData()
    {
      return data;
    }
  
  protected:
  
    time_t data;
  
};

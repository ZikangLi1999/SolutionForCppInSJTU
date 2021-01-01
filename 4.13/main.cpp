#include <iostream>

using namespace std;

int main()
{
    int mellon,apple,orange;

    for (mellon=1;mellon<15;++mellon)
    {
        for (apple=1;apple<(100-mellon);++apple)
        {
            for (orange=1;orange<=(100-mellon-apple);++orange)
            if (10*mellon+3*apple+orange==150&&mellon+apple+orange==100)
              cout<<"mellon:"<<mellon<<" apple:"<<apple<<" orange:"<<orange<<endl;
        }
    }
    return 0;
}

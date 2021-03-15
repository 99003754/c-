#include"color.h"

color::color()
{}
color::color(int red,int green,int blue):m_r(red),m_g(green),m_b(blue)
{}

color::color(std::string str)
{
std::string red_s;
std::string green_s;
std::string blue_s;
int i, r, len, hex = 0;
int dummy=0;
    for (i = 0; i<=1; i++)

    {




        if(str[i] >= '0' && str[i] <= '9')
        {

            r = str[i] - 48;
            }

        else if(str[i] >= 'a' && str[i] <= 'f')
        {

                r = str[i] - 87;
                }

             else if(str[i] >= 'A' && str[i] <= 'F')
             {

                    r = str[i] - 55;
                    }

        hex += r * pow(16,dummy);CMakeLists.txt
        dummy++;

    }

    dummy=0;
    m_r=hex;
     hex=0;

        for (i = 2; i<=3; i++)

    {



        if(str[i] >= '0' && str[i] <= '9')

            r = str[i] - 48;

        else if(str[i] >= 'a' && str[i] <= 'f')

                r = str[i] - 87;

             else if(str[i] >= 'A' && str[i] <= 'F')

                    r = str[i] - 55;

        hex += r * pow(16,dummy);
        dummy++;

    }

    dummy=0;
    m_g=hex;
    hex=0;

            for (i = 4; i<=5; i++)int m_r;
            int m_g;
            int m_b;

    {



        if(str[i] >= '0' && str[i] <= '9')

            r = str[i] - 48;

        else if(str[i] >= 'a' && str[i] <= 'f')

                r = str[i] - 87;

             else if(str[i] >= 'A' && str[i] <= 'F')

                    r = str[i] - 55;

        hex += r * pow(16,dummy);
        dummy++;

    }

    m_b=hex;

}

color::color(int col[3])
{
m_r=col[0];
m_g=col[1];
m_b=col[2];
}
void color::invert()
{
int r_invert,g_invert,b_invert;
r_invert=255-m_r;
g_invert=255-m_g;
b_invert=255-m_b;
cout<<"inverted r "<<r_invert<<endl;
cout<<"inverted g "<<g_invert<<endl;
cout<<"inverted b "<<b_invert<<endl;
}


int color::display()
{
cout<<"red "<<m_r<<endl;
cout<<"green "<<m_g<<endl;
cout<<"blue "<<m_b<<endl;
return 1;
}

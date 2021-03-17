/**
 * @file mystring.h
 * @author Your name
 * @brief 
 * @version 0.1
 * @date 2021-03-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

class mystring
{
private:
    char* array;
    size_t length;
public:
    mystring(); // mystring s1;
    mystring(const char*); // mystring s1("name");
    mystring(const mystring&); // mystring s2(s1);

    /**
     * mystring(const char* str)
     * {
     *  int len = strlen(str);
     *  array = new char[len +1] ; //Verify 
     * // release memory in destructor
     * }
     * 
     * S1 = "other name"; ??
     * S1 = S2;
     * S1 == S2;
     * S3 = S1 + S2;
     * S4 = S1 + "new name;
     * S1 > S2
     * 
     */

    ~mystring();
};

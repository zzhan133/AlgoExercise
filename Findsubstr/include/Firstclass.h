#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H


class Firstclass
{
    public:
        Firstclass();
        Firstclass(char* strIni);
        virtual ~Firstclass();

        int Findnumstring(char* strsub);
    protected:
    private:
        char* str;
};

#endif // FIRSTCLASS_H

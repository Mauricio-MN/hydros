#ifndef HYDROS_H // include guard
#define HYDROS_H

class SanitarioPublico{
    public:
    VasoSanitario vaso;
    Pia pia;

};

class BanheiroPublico : SanitarioPublico{
    private:
    Chuveiro chuveiro;

    public:
    void setStatus(bool s);

    BanheiroPublico();
    ~BanheiroPublico();

};

class VasoSanitario{
    private:
    float vazao;
    bool status;
    public:
    void setStatus(bool s){
        status = s;
    }

    VasoSanitario();
    ~VasoSanitario();

};

class Pia{
    private:
    float vazao;
    bool status;
    public:
    void setStatus(bool s){
        status = s;
        if(s){
            vazao = 20;
        } else {
            vazao = 0;
        }
    }

    Pia();
    ~Pia();
};

class Chuveiro{
    private:
    float vazao;
    bool status;
    public:
    void setStatus(bool s){
        status = s;
        if(s){
            vazao = 40;
        } else {
            vazao = 0;
        }
    }

    Chuveiro();
    ~Chuveiro();
};

#endif
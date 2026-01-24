class Vector{
    public:
        Vector()= default;//기본생성자 만들어주는거 
        Vector(int mX ,int mY):mX(mX),mY(mY){}

        Vector operator+(const Vector&rhs)const{// 맨앞에 첫번째 나자신 더해지는 수 두번째 파라미터 기본생성자 필수로 있어야 가능하다.기본생성자에 대입해야 되기 때문에 
            Vector sum;
            sum.mX = mX + rhs.mX;
            sum.mY = mY + rhs.mY;
            return sum;
        }
    private:
        int mX;
        int mY;
};


int main(int argc, char const *argv[])
{
    Vector v1(10,20);
    Vector v2(3,17);
    Vector sum = v1+v2;
    return 0;
}

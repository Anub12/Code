template<typename T, typename V>

class Pair{
    T x;
    V y;
    
public:
    void setX(T x) {
        this->x = x;
    }
    T getX() {
        return x;
    }
    void setY(T y) {
        this -> y = y;
    }
    T getY(){
        return y;
    }
};

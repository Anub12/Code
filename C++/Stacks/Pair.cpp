template <typename T, typename V> // This might also be used in maps and sets in cpp at the back end. 

class Pair {
    T x;
    V y;

public:

    void setX(T x){
        this->x = x;
    }

    T getX() {
        return x;
    }

    void setY(V y) {
        this->y = y;
    }

    V getY(){
        return y;
    }
};
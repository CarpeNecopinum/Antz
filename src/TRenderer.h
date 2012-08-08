class TRenderer
{
    static TRenderer instance;
    
    public:
        TRenderer();
        ~TRenderer();

    private:
        TList objects;
};
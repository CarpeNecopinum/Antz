#ifndef MOB_H
#define	MOB_H

class Mob
{
    public:
        Mob(Model _model);
        ~Mob();
        void step();
        Model* getModel();
    private:
        Model* model;

};

#endif	/* MOB_H */


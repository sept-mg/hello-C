int evaluer(const Expression &e)
{
    Pile p;
    initialiser(p, 1);
    debut(e);
    while (!fin(e))
    {
        Token t = suivant(e);
        if(t != '+' && t != '-' && t != '*' && t != '/')
            empile(p, t);
        else
        {
            int d = sommet(p);
            depiler(p);
            int g = sommet(p);
            depiler(p);
            switch (t)
            {
            case '+':
                empiler(p, g+d);
                break;
            
            case '-':
                empiler(p, g-d);
                break;

            case '*':
                empiler(p, g*d);
                break;

            case '/':
                empiler(p, g/d);
                break;
            }
        }
        
    }
    int r = sommet(p);
    detruire(p);
    return r;
}
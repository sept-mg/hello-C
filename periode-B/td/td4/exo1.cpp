void inverser(Item t[], int taille)
{
    Pile p;
    initialiser(p, n);
    for(int i = 0; i < n; ++i)
        empiler(p, t[i]);

    for (int i = 0; i < n; ++i)
    {
        t[i] = sommet(p);
        depiler(p);
    }
    detruire(p);
    
}
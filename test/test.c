void memclr(char *data, int N)
{
    for (; N>0; N--)
    {
        *data=0;
        data++;
    }
}

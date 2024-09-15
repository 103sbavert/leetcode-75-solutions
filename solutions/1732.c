int largestAltitude(int *gain, int gainSize)
{
    int alt = 0;
    int maxalt = 0;

    for (int i = 0; i < gainSize; i++) {
        alt += gain[i];
        maxalt = alt > maxalt ? alt : maxalt;
    }
    
    return maxalt;
}
vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    vector<int> result(2);

    if (a.size() != b.size() )
    {
        return result;
    }

    for (size_t i = 0; i < a.size(); ++i)
    {
        if (a[i] < b[i])
        {
            result[1]++;
        }
        else if (a[i] > b[i])
        {
            result[0]++;
        }
    }

    return result;
}

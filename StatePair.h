#ifndef STATEPAIR
#define STATEPAIR

template <typename T1, typename T2>
class StatePair
{
private:
    T1 StateKey;
    T2 StateValue;

    // TODO: Define constructors
public:
    StatePair()
    {
    }
    StatePair(T1 userKey, T2 userValue)
    {
        StateKey = userKey;
        StateValue = userValue;
    }

    // TODO: Define mutators, and accessors for StatePair
    T1 GetKey()
    {
        return StateKey;
    }
    T2 GetValue()
    {
        return StateValue;
    }

    void SetKey(T1 key)
    {
        StateKey = key;
    }
    void SetValue(T2 value)
    {
        StateValue = value;
    }
    // TODO: Define PrintInfo() method
    void PrintInfo()
    {
        cout << StateKey << ": " << StateValue << endl;
    }
};

#endif

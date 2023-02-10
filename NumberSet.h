

  typedef int Number; //every time you see Number, it's the equivalent of seeing int

  const int maxSize=10;

  struct NumberSet

    {

      Number items[maxSize]; //name of the array is items

      int count;

    };

  void numberSetAdd(NumberSet& set, Number num); // adds 'num' to 'set' (if possible); otherwise prints error message and makes no change to 'set'. NumberSet is the data type which was created above

  void numberSetRemove(NumberSet& set, Number num); // removes all instances (if any exist) of 'num' from 'set'; otherwise prints error message and makes no change to 'set'

  int numberSetCountLessThan(NumberSet& set, Number num); // returns the number of elements smaller than 'num' in 'set'

  int numberSetCountMoreThan(NumberSet& set, Number num); // returns the number of elements larger than 'num' in 'set'

  NumberSet newNumberSet(); // returns a new, empty NumberSet

#include<iostream>
#include<string>

class citizen
{
  public:
  std::string name;
  std::string known[3];
}

int main()
{
  int votes[6] = {0, 0, 0, 0, 0, 0};
  citizen voters[6];
  voters[0] = {"James", {"Jessie", "Ash", "Brock"}};
  voters[1] = {"Jessie", {"James", "Ash", "Brock"}};
  voters[2] = {"Brock", {"Oak", "Ash", "Misty"}};
  voters[3] = {"Misty", {"Oak", "Ash", "Brock"}};
  voters[4] = {"Oak", {"Misty", "Ash", "Brock"}};
  voters[5] = {"Ash", {"Misty", "Oak", "Brock"}};

  for(int i = 0; i < 6; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      for(int k = 0; k < 6; k++)
      {
        if(voters[i].known[j] == voters[k].name)
        {
          votes[k]++;
        }
      }
    }
  }
  
  for(int l = 0; l < 6; l++)
  {
    if(votes[l] = 5)
    {
      std::cout << voters[l].name << " is eligiable to be mayor" << std::endl;
    }
  }

  return 0
}

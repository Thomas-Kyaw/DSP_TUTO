#include<iostream>

class Entity
{
  protected:
    std::string ID;

  public:
    Entity()
    {
      ID = "Default";
    }

    void SetID(std::string ID)
    {
      this->ID = ID;
    }
    std::string GetID()
    {
      return ID;
    }
};

class Character : Entity
{
private:
  std::string Profession;
public:
  Character(std::string ID, std::string Prof)
  {
    Entity::ID = ID;
    this->Profession = Prof;
  }

  void SetProfession(std::string Profession)
  {
    this->Profession = Profession;
  }

  std::string GetProfession()
  {
    return Profession;
  }

  // Friend function for input stream operator (>>)
  friend std::istream& operator>>(std::istream& aIstream, Character& aCharacter)
  {
      aIstream >> aCharacter.ID >> aCharacter.Profession;
      return aIstream;
  }

  // Friend function for output stream operator (<<)
  friend std::ostream& operator<<(std::ostream& aOstream, const Character& aCharacter)
  {
      aOstream << "ID: " << aCharacter.ID << " Profession: " << aCharacter.Profession;
      return aOstream;
  }
};


int main(int argc, char* argv[])
{
  Entity Something;
  std::string Name;
  std::cout <<  "Enter a name for this Object: ";
  std::cin >> Name;

  Something.SetID(Name);

  std::cout << Something.GetID() << std::endl;
  
  Character Guy("Frodo", "Hobbit");

  std::cout << Guy.GetProfession() << std::endl;

  // Use overloaded << to display Guy's details
  std::cout << Guy << std::endl;

  // Use overloaded >> to take input for Guy's ID and Profession
  std::cin >> Guy;

  // Display updated details of Guy
  std::cout << Guy << std::endl;

  return 0;
}

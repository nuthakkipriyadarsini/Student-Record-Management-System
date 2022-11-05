/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#include <string.h>
#include <conio.h>

using namespace std;

class Node
{
public:

  int roll_no;

  string name;

  float marks, per;

  Node *next;


};


class Linked_list
{
public:

  Node * head = NULL;

  void Insert ()
  {
    int r;
    string n;
    float m;

      cout << "\n\n Enter Rollno :";
      cin >> r;


      cout << "\n\n Enter Name";
      cin >> n;

      cout << "\n\n Enter Marks :";
      cin >> m;

    Node *new_node = new Node;

      new_node->roll_no = r;
      new_node->name = n;
      new_node->marks = m;
      new_node->per = m / 100 * 100;
      new_node->next = NULL;

    if (head == NULL)
      {
	head = new_node;
      }

    else
      {
	Node *temp = head;

	while (temp->next != NULL)
	  {
	    temp = temp->next;
	  }
	temp->next = new_node;
      }
    cout << "\n\n  Newnode inserted succesfully ";



  }


  void Search ()
  {
    if (head == NULL)
      {
	cout << "\n\n  Linked list is Empty ";
      }
    else
      {
	int r, found = 0;
	cout << "\n\n  enter rollno for search";

	cin >> r;


	Node *temp = head;

	while (temp != NULL)
	  {
	    if (r == temp->roll_no)
	      {
		cout << "\n\n Rollno: " << temp->roll_no;
		cout << "\n\n Name: " << temp->name;
		cout << "\n\n Marks: " << temp->marks;
		cout << "\n\n percentage" << temp->per;

		found++;
	      }


	    temp = temp->next;

	  }

	if (found == 0)
	  {

	    cout << "\n\n  Search Rollno " << r << " Cant found ";
	  }

      }

  }


  void count ()
  {

    if (head == NULL)
      {
	cout << "\n\n  Linked list is Empty ";
      }

    else
      {
	int c = 0;
	Node *temp = head;

	while (temp != NULL)
	  {
	    c++;


	    temp = temp->next;

	  }

	cout << "\n\n  Search Rollno " << c;



      }
  }


  void update ()
  {
    if (head == NULL)
      {
	cout << "\n\n  Linked list is Empty ";
      }
    else
      {
	int r, found = 0;
	cout << "\n\n  enter New  rollno for Updation:";

	cin >> r;


	Node *temp = head;

	while (temp != NULL)
	  {
	    if (r == temp->roll_no)
	      {
		cout << "\n\n Enter New Rollno :";
		cin >> temp->roll_no;


		cout << "\n\n Enter New Name";
		cin >> temp->name;

		cout << "\n\n Enter  New Marks :";
		cin >> temp->marks;


		//temp->per=marks/100* 100;
		cout << "\n\n  Record Updated Succesfully.......";
		found++;
	      }


	    temp = temp->next;

	  }

	if (found == 0)
	  {

	    cout << "\n\n  Search Rollno " << r << " Cant found ";
	  }

      }

  }


  void Delete ()
  {
    if (head == NULL)
      {
	cout << "\n\n  Linked list is Empty ";
      }
    else
      {
	int r, found = 0;
	cout << "\n\n  enter New  rollno for Deeletion:";

	cin >> r;

	if (r == head->roll_no)
	  {
	    Node *temp = head;

	    head = head->next;
	    found++;
	    delete temp;
	    cout << "\n\n  Record Deleted Succesfully.......";

	  }

	else
	  {
	    Node *prev = head;

	    Node *temp = head->next;

	    while (temp != NULL)
	      {

		if (r = temp->roll_no)
		  {
		    prev->next = temp->next;
		    cout << "\n\n  Record Deleted Succesfully.......";

		    found++;

		    delete temp;

		    break;


		  }

		prev = temp;
		temp = temp->next;
	      }

	  }

	if (found == 0)
	  {
	    cout << "\n\n  Delete  Rollno " << r << " Cant found ";
	  }


      }

  }


  void show ()
  {

    if (head == NULL)
      {
	cout << "\n\n  Linked list is Empty ";
      }
    else
      {



	Node *temp = head;

	while (temp != NULL)
	  {

	    cout << "\n\n Rollno: " << temp->roll_no;
	    cout << "\n\n Name: " << temp->name;
	    cout << "\n\n Marks: " << temp->marks;
	    cout << "\n\n percentage" << temp->per;

	    temp = temp->next;

	  }



      }



  }



};

int
main ()
{

  Linked_list obj;
p:

  system ("cls");
  int choice;
  cout << "\n\n 1.Insert Record";
  cout << "\n\n 2.search Record";
  cout << "\n\n 3.Count Nodes";
  cout << "\n\n 4.Update  Record";
  cout << "\n\n 5. Delete Record";
  cout << "\n\n 6. show all  Record";
  cout << "\n\n 7. Exit";
  cout << "\n\n  Your choice: ";
  cin >> choice;

  switch (choice)
    {
    case 1:

      system ("cls");
      obj.Insert ();

      break;
    case 2:

      system ("cls");
      obj.Search ();

      break;

    case 3:


      system ("cls");
      obj.count ();

      break;
    case 4:

      system ("cls");
      obj.update ();

      break;
    case 5:

      system ("cls");
      obj.Delete ();


      break;

    case 6:

      system ("cls");
      obj.show ();

      break;

    case 7:
      exit (0);
    default:

      cout << "\n\n invalid";


    }


  getch ();
  goto p;

  return 0;
}

// see the #includes re-grouped and re-ordered
#include "header2.h"
#include <iostream>
#include "header.h"
#include <algorithm>
#include <vector>
#include <fmt/printf.h>

using std::vector;
using std::string;


// see the macros lined up, see trailing comments lined up
#define MACRO1 (1) // trailing comment 1
#define MACRO11 (1) // trailing comment 2
#define MACRO111 (1) // trailing comment 3
#define MACRO1111 (1) // trailing comment 4

// more macro checking
#define LONG_STRING "this is a long string that is going to be" \
	"split across multiple lines." \
	"the intention is to see if the formatters" \
	"line them up in a way that suggests to the eye" \
	"some form of structure or repeatability. also testing to see where it lines up with respect to the final line"

# if 0
#if 0
#	define ASDF (7)
#else
#define	LOOK_AT_HOW_THIS_TRANSFORMS (77)
#endif
#endif


#ifdef __cplusplus
extern "C" {
#endif
namespace FooName {

	const char* hey_check_out_this_string = "abcdefghikjlmnopqrstuvwxyz1234567890abcdefghikjlmnopqrstuvwxyz1234567890abcdefghikjlmnopqrstuvwxyz1234567890abcdefghikjlmnopqrstuvwxyz1234567890";

	namespace BarName { } // namespace BarName

	namespace BarName2 {
	} // namespace BarName2

	class FooClassParent1
	{
	};

	class FooClassParent2
	{
	};

	class FooClass:FooClassParent1, FooClassParent2 {
		public:
			FooClass()
				:
					bar(0),
					foo(0)
		{};
		int FooYou() { return 7; }
		int FooMe() { return this->FooYou() + 1; }
		private:
		int foo;
			int bar;
	};
}
#ifdef __cplusplus
}
#endif


struct
{
	int a;
	double b;
	long double c;
	float d;
} structy;


struct {
	int a;
	double b;
	long double c;
	float d;
}
structy_2;


enum {
	ENUMERY_A,
	ENUMERY_B,
	ENUMERY_C,
	ENUMERY_D,
} enumery;


typedef enum {
	ENUMERY2_A,
	ENUMERY2_B,
	ENUMERY2_C,
	ENUMERY2_D,
}
enumery2;


// see if the braces are reflowed, and if padding lines are added between these things
// i want to see these formatted like:
// return_type
// name (parameter 1,
//       parameter 2222,
//       ...
//       )
// {
//
// }
void f(void);
void f (void) {
}
void g(void);
void g(void)
	{
	}


int this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(int this_parameter_name_is_long, double this_parameter_name_too_is_long, long double the_name_of_this_parameter_has_long_in_the_name_so_you_know_it_is_long, char this_is_the_longest_parameter_name_because_while_typing_the_last_one_i_wondered_what_if_this_was_really_long_like_quote_java_long_end_quote)
{
	return 7;
}


// check the formatting of switch statements used as lookup
int h(int);
int h(int input)
{

	// is there an empty line above this one?
	switch(input)
	{
		case 0:  return input + 1;
		case 1:  return input + 11;
		case 2:  return input + 11111;
		default:
			return input + 1;
	}

	return input;
}








// veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of information can we get to the 120th column before time runs out
// tune in next time
/* second veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of information */
// how many empty lines were preserved from above?
int h2(int input)
{

	// above empty line should be removed
	int ret = 0;

	// see formatting of a filthy stateful switch case
	switch(input)
	{
		case 0:{
			       ret += 1;
			       break;
		       }
		case 1:
		       {
		       ret += 11;
		       break;
	}
		case 2:  ret += 11111;
		default:
			return input + ret + 7;
	}

	return ret;
}



int f1(void)
{
	return 0;
}
int f2(void)
{
	return 1;
}




int main(int argc, char** argv) {
	// see if the comment is given a padding line between declaration blocks
	char *foo;
	char *bar;
	/* This separates blocks of declarations.  */
	int baz;

	int a,b,c,d,ef;



	int i, k, p, q, n;

	if ((((i < 2 &&
	        k > 0) || p == 0) &&
	    q == 1) ||
	  n == 0)
	{
		// joke's  on you, you had to read it and then we did nothing
	}

	int long_variable_name_just_because = this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(
		this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7)
		, this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7)
		, this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7)
		, this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7)
		);

	// expecting asterisks to be on the right of a token
	// expecting address operator to be on the left of a token, without spaces
	int *p1 = &long_variable_name_just_because;
	const int *p2 = & long_variable_name_just_because;
	int *const p3 = &long_variable_name_just_because;
	const int* const p4 = & long_variable_name_just_because;


	int long_variable_name_just_because2 =
		7 * this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7)
		+ this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7)
		+ this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7)
		+ this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7);

	int long_variable_name_just_because3 =
		7 * this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7) +
		this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7) +
		this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7) +
		this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.0, 0.1, 7);

	int long_variable_name_just_because4 =
		7 * this_function_name_is_intentionally_long_so_as_to_trigger_certain_rules(7, 0.000000000000000000000000000000000000000000000000, 7, 'a');

	int* mask = p1;

	int long_variable_name_just_because5 = long_variable_name_just_because3 + long_variable_name_just_because4 ? long_variable_name_just_because2 : 1;

  if (mask
      && ((mask[0] == '\0')
          || (mask[1] == '\0' &&
              ((mask[0] == '0') || (mask[0] == '*')))));




# if 0
#if 0
#	define WOWEEE (7)
#else
#define	LOOK_AT_HOW_THIS_TRANSFORMS_TOO (77)
#endif
#endif


// see if the indent of this comment and the following one are altered
// and see if there is a preceding '*' put into the comment
/*
   Loving hug
 */
	// i want to see all of these formatted to be exactly like
	// if (...)
	// {
	// 	// block
	// }
	// this empty line is optional
	// else if (...)
	// {
	// 	// block
	// }
	// this empty line is optional
	// else
	// {
	// 	// block
	// }
	//
	//
	// or
	// do
	// {
	//      // block
	// }
	// while (...)
	//
	// or
	//
	// while (...)
	// {
	// }
	//
	// or
	//
	// for (...)
	// {
	// }

	// see labels be not-indendeted ever, always left justified
label1:

	if (baz > 0) {
		goto label2;
	}

		label2:

	if (baz > 0) { /* ... */ }

	if (baz > 0)
	{
		label3:
		(void) 0;
label4:
		(void) 0;
}

	do
{
}
while(0);

	if (baz > 0) { } else { }

	if (baz > 0) {
	} else { }

	if (baz > 0) { }
	else { }

	if (baz > 0) {
	} else {
	}

	if (baz > 0) {
	} else if (0) {
	}

	if (baz > 0) {
	} else if (0) {
	} else
{
}
	if (baz > 0) {
		baz;
	} else if (0) {
		(void)baz;
	} else
{
	++ baz;
	-- baz;
	baz ++;
	baz --;
}

	do {
	} while (0);

	do { } while (0);

	do { }
	while (0);

	do { } while
	(0);

	do
	{ } while (0);

	// casts
	(void)0;
	(void) 0;
	( void) 0;
	(void ) 0;
	( void ) 7;

// see if the trailing comma is emphasized
	if (baz > 0);

#pragma idk
#pragma wtf
	#pragma test_this_indent

	if (baz > 0);{};
	if (baz > 0){};
	if (baz > 0);{}

	int z =  // this comment is intended to go for a while, so as to trigger specific rules and see how the resulting code is formatted
		h2(
				0);


	vector<string> strings {"ahoy", "another string", "i want to see how this turns out", "im running out of ideas as well", "so im just typing things in the hopes i run into inspiration", "and failing that i should just hope to run off the end", "i just sneezed and must go to the restroom"};

	vector<string> strings2{"ahoy", "another string", "i want to see how this turns out", "im running out of ideas as well", "so im just typing things in the hopes i run into inspiration", "and failing that i should just hope to run off the end", "i just sneezed and must go to the restroom"};

	int seven = (double)7;
	int eight = (float) !8;
	int nine = ( char ) 9;

	int array [9][10];

	return 0;
}





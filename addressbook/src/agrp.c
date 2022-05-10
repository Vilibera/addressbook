// #include "includes.h"


// #define OPT_ABORT  1     /* –abort */
// static struct argp_option options[] = {
//     {"name",        'n',"Name",         0,  "Name" },
//     {"surname",     's',"Surname",      0,  "Surname" },
//     {"email",       'e',"Email",        0,  "Email" },
//     {"phonenumber", 'p',"PhoneNumber",  0,  "PhoneNumber" },
//     {"abort",         OPT_ABORT,     0, 0,  "Abort before showing any output"},
//     { 0 }
// };


// static error_t parse_opt (int key, char *arg, struct argp_state *state);

// const char *argp_program_version ="1.0.0";
// const char *argp_program_bug_address ="<viliusbernikas@teltonika.lt>";

// static char doc[] ="address book";

// static char args_doc[] = "ARG1 [STRING...]";

// static struct argp argp = { options, parse_opt, args_doc, doc }; 

// static error_t parse_opt (int key, char *arg, struct argp_state *state)
// {
//     struct node *con = state->input;
//     switch (key){
//         case 'n': 
//         {   
//             con->name = arg;
//             break;
          
//         }
//         case 's': 
//         {   
//             con->surname = arg;
//             break;
          
//         }
//         case 'p':
//         {
//              con->phonenumber = arg;
//              break;
            
//         }
//         case 'e': 
//         {   
//             con->email = arg;
//             break;
          
//         }
//         case ARGP_KEY_ARG:
//             if (state->arg_num >= 5)
//             /* Too many arguments. */
//             argp_usage (state);
// 		case ARGP_KEY_END:
// 		if ((!con->name) || (!con->surname)|| (!con->phonenumber)|| (!con->email)){
// 			argp_usage (state);
// 		}
// 		break;
// 		default:
// 			return ARGP_ERR_UNKNOWN;
//  }
//  return 0;
// } 


// int agrp_init(int argc,char *argv[])
// {

//     struct node con;
//     argp_parse(&argp,argc,argv,0,0,&con);
//     printf("%s\n", con.email);
//     return 0;
// }
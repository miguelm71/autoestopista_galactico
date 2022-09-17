
#include "ft_stock_str.h"

int main (int argc, char **argv)
{
	int i = 1;

	struct s_stock_str *s = ft_strs_to_tab(argc -1, ++argv);
	ft_show_tab(s);
}
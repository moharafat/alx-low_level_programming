nclude <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: always 0 (Success)
 *    */


int main(void)
{
		char x;

			for (x = 'a'; x <= 'z'; x++)
					{
								if (x != 'e' && x != 'q')
											{
															putchar(x);
																	}
									}

				putchar('\n');

					return (0);
}


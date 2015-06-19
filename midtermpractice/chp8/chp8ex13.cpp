// chp 8 exercise 13

template<typename T>
void transform (iterator start, iterator stop, iterator to, T fun(T))
{
	while (start != stop)
		*to++ = fun(*start++)
}

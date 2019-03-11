void free_dog(dog_t *d)
{
        if (!d)
                return;
        if (d->name)
                free(d->name);
        if (d->owner)
                free(d->owner);
        free(d);
}

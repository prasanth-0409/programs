#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRING_LENGTH 6

struct package
{
	char* id;
	int weight;
};

typedef struct package package;

struct post_office
{
	int min_weight;
	int max_weight;
	package* packages;
	int packages_count;
};

typedef struct post_office post_office;

struct town
{
	char* name;
	post_office* offices;
	int offices_count;
};

typedef struct town town;



void print_all_packages(town t) {
    int offices = t.offices_count;
    int i = 0;
    
    printf("%s:\n", t.name);
    for(;i < offices; ++i){
        printf("\t%d:\n",i);
        package * pkgs = t.offices[i].packages;
        for(int j=0; j < t.offices[i].packages_count;++j){
            printf("\t\t%s\n", pkgs[j].id);
        }
    }
}

void send_all_acceptable_packages(town* source, int source_office_index, town* target, int target_office_index) {	

    package *src_pkg = source->offices[source_office_index].packages;
    package *dst_pkg = target->offices[target_office_index].packages;
    int src_pkg_count = source->offices[source_office_index].packages_count;
    int dst_pkg_count = target->offices[target_office_index].packages_count;
    int dst_min_wt = target->offices[target_office_index].min_weight;
    int dst_max_wt = target->offices[target_office_index].max_weight;
    int final_src_pkg_count = src_pkg_count;

    for(int i = 0; i < src_pkg_count;++i){
        if ( (src_pkg[i].weight >= dst_min_wt) && 
             (src_pkg[i].weight <= dst_max_wt)){
		 target->offices[target_office_index].packages = realloc(dst_pkg, sizeof(package) * (dst_pkg_count +1));
		 dst_pkg  = target->offices[target_office_index].packages;
                 dst_pkg[dst_pkg_count].weight = src_pkg[i].weight;
                 dst_pkg[dst_pkg_count].id = calloc(1, sizeof(char)* MAX_STRING_LENGTH);
                 strncpy(dst_pkg[dst_pkg_count].id,src_pkg[i].id, MAX_STRING_LENGTH);
                 dst_pkg_count++;
                 --final_src_pkg_count;
                 target->offices[target_office_index].packages_count++;
                 src_pkg[i].weight = 0; // Marking, for later cleanup
             }
    }
    package * temp = calloc(1, sizeof(package)* final_src_pkg_count);
    int j = 0;
    for(int i=0; i<src_pkg_count;++i){
        if(src_pkg[i].weight != 0){
           temp[j].weight = src_pkg[i].weight;
           temp[j].id = calloc(1, sizeof(char) * MAX_STRING_LENGTH);
           strncpy(temp[j].id, src_pkg[i].id, MAX_STRING_LENGTH);
           free(src_pkg[i].id);
           ++j;
        }
    }
    free(src_pkg);
    source->offices[source_office_index].packages = temp;
    source->offices[source_office_index].packages_count = final_src_pkg_count;

}

town town_with_most_packages(town* towns, int towns_count) {
    int * rec = calloc(1, sizeof(int) * towns_count);

    for(int i=0; i < towns_count;++i){
        for(int j=0; j < towns[i].offices_count;++j){
            rec[i] += towns[i].offices[j].packages_count;
        }
    }
    int max = 0;
    town max_town;
    for(int i = 0; i < towns_count;++i){
        if (rec[i] > max){
            max = rec[i];
            max_town = towns[i];
        }
    }
    return max_town;
}

town* find_town(town* towns, int towns_count, char* name) {
      int i = 0;

      for(i=0;i<towns_count;++i){
          if (strcmp(towns[i].name, name) == 0 ){
              return (towns+i);
          }
      }
      return NULL;
}

int main()
{
	int towns_count;
	scanf("%d", &towns_count);
	town* towns = malloc(sizeof(town)*towns_count);
	for (int i = 0; i < towns_count; i++) {
		towns[i].name = malloc(sizeof(char) * MAX_STRING_LENGTH);
		scanf("%s", towns[i].name);
		scanf("%d", &towns[i].offices_count);
		towns[i].offices = malloc(sizeof(post_office)*towns[i].offices_count);
		for (int j = 0; j < towns[i].offices_count; j++) {
			scanf("%d%d%d", &towns[i].offices[j].packages_count, &towns[i].offices[j].min_weight, &towns[i].offices[j].max_weight);
			towns[i].offices[j].packages = malloc(sizeof(package)*towns[i].offices[j].packages_count);
			for (int k = 0; k < towns[i].offices[j].packages_count; k++) {
				towns[i].offices[j].packages[k].id = malloc(sizeof(char) * MAX_STRING_LENGTH);
				scanf("%s", towns[i].offices[j].packages[k].id);
				scanf("%d", &towns[i].offices[j].packages[k].weight);
			}
		}
	}
	int queries;
	scanf("%d", &queries);
	char town_name[MAX_STRING_LENGTH];
	while (queries--) {
		int type;
		scanf("%d", &type);
		switch (type) {
		case 1:
			scanf("%s", town_name);
			town* t = find_town(towns, towns_count, town_name);
			print_all_packages(*t);
			break;
		case 2:
			scanf("%s", town_name);
			town* source = find_town(towns, towns_count, town_name);
			int source_index;
			scanf("%d", &source_index);
			scanf("%s", town_name);
			town* target = find_town(towns, towns_count, town_name);
			int target_index;
			scanf("%d", &target_index);
			send_all_acceptable_packages(source, source_index, target, target_index);
			break;
		case 3:
			printf("Town with the most number of packages is %s\n", town_with_most_packages(towns, towns_count).name);
			break;
		}
	}
	return 0;
}

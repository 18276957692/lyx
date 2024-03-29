/* generator.c generated by valac 0.48.1, the Vala compiler
 * generated from generator.vala, do not modify */

#include <glib-object.h>
#include <glib.h>

#define DATA_LINK_TYPE_GENERATOR (data_link_generator_get_type ())
#define DATA_LINK_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DATA_LINK_TYPE_GENERATOR, DataLinkGenerator))
#define DATA_LINK_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DATA_LINK_TYPE_GENERATOR, DataLinkGeneratorClass))
#define DATA_LINK_IS_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DATA_LINK_TYPE_GENERATOR))
#define DATA_LINK_IS_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DATA_LINK_TYPE_GENERATOR))
#define DATA_LINK_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DATA_LINK_TYPE_GENERATOR, DataLinkGeneratorClass))

typedef struct _DataLinkGenerator DataLinkGenerator;
typedef struct _DataLinkGeneratorClass DataLinkGeneratorClass;
typedef struct _DataLinkGeneratorPrivate DataLinkGeneratorPrivate;
enum  {
	DATA_LINK_GENERATOR_0_PROPERTY,
	DATA_LINK_GENERATOR_NUM_PROPERTIES
};
static GParamSpec* data_link_generator_properties[DATA_LINK_GENERATOR_NUM_PROPERTIES];

struct _DataLinkGenerator {
	GObject parent_instance;
	DataLinkGeneratorPrivate * priv;
	gint protocol_type;
};

struct _DataLinkGeneratorClass {
	GObjectClass parent_class;
	void (*composite_protocol_data) (DataLinkGenerator* self);
	guint16* (*process_special_data) (DataLinkGenerator* self, gint* result_length1);
};

static gpointer data_link_generator_parent_class = NULL;

GType data_link_generator_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DataLinkGenerator, g_object_unref)
DataLinkGenerator* data_link_generator_construct_empty (GType object_type);
DataLinkGenerator* data_link_generator_construct (GType object_type,
                                                  gint protocol_type);
void data_link_generator_composite_protocol_data (DataLinkGenerator* self);
static void data_link_generator_real_composite_protocol_data (DataLinkGenerator* self);
guint16* data_link_generator_process_special_data (DataLinkGenerator* self,
                                                   gint* result_length1);
static guint16* data_link_generator_real_process_special_data (DataLinkGenerator* self,
                                                        gint* result_length1);
static void data_link_generator_finalize (GObject * obj);
static GType data_link_generator_get_type_once (void);

DataLinkGenerator*
data_link_generator_construct_empty (GType object_type)
{
	DataLinkGenerator * self = NULL;
#line 5 "../src/data_link/generator.vala"
	self = (DataLinkGenerator*) g_object_new (object_type, NULL);
#line 5 "../src/data_link/generator.vala"
	return self;
#line 60 "generator.c"
}

DataLinkGenerator*
data_link_generator_construct (GType object_type,
                               gint protocol_type)
{
	DataLinkGenerator * self = NULL;
#line 8 "../src/data_link/generator.vala"
	self = (DataLinkGenerator*) g_object_new (object_type, NULL);
#line 9 "../src/data_link/generator.vala"
	self->protocol_type = protocol_type;
#line 8 "../src/data_link/generator.vala"
	return self;
#line 74 "generator.c"
}

static void
data_link_generator_real_composite_protocol_data (DataLinkGenerator* self)
{
#line 12 "../src/data_link/generator.vala"
	g_critical ("Type `%s' does not implement abstract method `data_link_generator_composite_protocol_data'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
#line 12 "../src/data_link/generator.vala"
	return;
#line 84 "generator.c"
}

void
data_link_generator_composite_protocol_data (DataLinkGenerator* self)
{
#line 12 "../src/data_link/generator.vala"
	g_return_if_fail (self != NULL);
#line 12 "../src/data_link/generator.vala"
	DATA_LINK_GENERATOR_GET_CLASS (self)->composite_protocol_data (self);
#line 94 "generator.c"
}

static guint16*
data_link_generator_real_process_special_data (DataLinkGenerator* self,
                                               gint* result_length1)
{
	guint16* _tmp0_;
	gint _tmp0__length1;
	guint16* result = NULL;
#line 15 "../src/data_link/generator.vala"
	_tmp0_ = NULL;
#line 15 "../src/data_link/generator.vala"
	_tmp0__length1 = 0;
#line 15 "../src/data_link/generator.vala"
	if (result_length1) {
#line 15 "../src/data_link/generator.vala"
		*result_length1 = _tmp0__length1;
#line 112 "generator.c"
	}
#line 15 "../src/data_link/generator.vala"
	result = _tmp0_;
#line 15 "../src/data_link/generator.vala"
	return result;
#line 118 "generator.c"
}

guint16*
data_link_generator_process_special_data (DataLinkGenerator* self,
                                          gint* result_length1)
{
#line 14 "../src/data_link/generator.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 14 "../src/data_link/generator.vala"
	return DATA_LINK_GENERATOR_GET_CLASS (self)->process_special_data (self, result_length1);
#line 129 "generator.c"
}

static void
data_link_generator_class_init (DataLinkGeneratorClass * klass,
                                gpointer klass_data)
{
#line 2 "../src/data_link/generator.vala"
	data_link_generator_parent_class = g_type_class_peek_parent (klass);
#line 2 "../src/data_link/generator.vala"
	((DataLinkGeneratorClass *) klass)->composite_protocol_data = (void (*) (DataLinkGenerator*)) data_link_generator_real_composite_protocol_data;
#line 2 "../src/data_link/generator.vala"
	((DataLinkGeneratorClass *) klass)->process_special_data = (guint16* (*) (DataLinkGenerator*, gint*)) data_link_generator_real_process_special_data;
#line 2 "../src/data_link/generator.vala"
	G_OBJECT_CLASS (klass)->finalize = data_link_generator_finalize;
#line 144 "generator.c"
}

static void
data_link_generator_instance_init (DataLinkGenerator * self,
                                   gpointer klass)
{
}

static void
data_link_generator_finalize (GObject * obj)
{
	DataLinkGenerator * self;
#line 2 "../src/data_link/generator.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DATA_LINK_TYPE_GENERATOR, DataLinkGenerator);
#line 2 "../src/data_link/generator.vala"
	G_OBJECT_CLASS (data_link_generator_parent_class)->finalize (obj);
#line 161 "generator.c"
}

static GType
data_link_generator_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (DataLinkGeneratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) data_link_generator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DataLinkGenerator), 0, (GInstanceInitFunc) data_link_generator_instance_init, NULL };
	GType data_link_generator_type_id;
	data_link_generator_type_id = g_type_register_static (G_TYPE_OBJECT, "DataLinkGenerator", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	return data_link_generator_type_id;
}

GType
data_link_generator_get_type (void)
{
	static volatile gsize data_link_generator_type_id__volatile = 0;
	if (g_once_init_enter (&data_link_generator_type_id__volatile)) {
		GType data_link_generator_type_id;
		data_link_generator_type_id = data_link_generator_get_type_once ();
		g_once_init_leave (&data_link_generator_type_id__volatile, data_link_generator_type_id);
	}
	return data_link_generator_type_id__volatile;
}


namespace DataLink {
    protected abstract class Generator : GLib.Object {
        public int protocol_type;

        internal Generator.empty(){
        }
    
        internal Generator(int protocol_type){
            this.protocol_type = protocol_type;
        }
        
        public abstract void composite_protocol_data();

        public virtual uint16[]? process_special_data(){
            return null;
        }

        //  public abstract int8[] data_split();
    
        //  public abstract int8[] add_start_sig();
    
        //  public abstract int8[] add_stop_sig();
     }
}

using Gee;
using DataLink;

namespace Physical{
    public class LevelTransmitter : GLib.Object {   
        public int protocol_type;
        public int level;
        public Generator generator;

        public LevelTransmitter(){
    
        }
    
        public void set_protocol_type(int protocol_type){
            this.protocol_type = protocol_type;
        }
    
        public uint32[]? level_transmitter(){
            return null;
        }
    
        //  public uint32[]? 
    }
}

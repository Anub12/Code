import React from "react";
import "../Components/Link.css"

class Link extends React.Component{
    render(){
        // console.log('this.props', this.props);
        const { href, title, target, rel } = this.props;
        return(
            <div>
                <a href={href} target={target} rel={rel} >{title}</a>
            </div>
        );
    }
}


export default Link;
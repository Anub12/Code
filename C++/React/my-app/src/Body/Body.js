import React from "react";
import "../Body/Body.css";
import Link from "../Components/Link";

class Body extends React.Component {

    // console.log('this.props', this.props);
    render() {
        return (
            <div>
                <div>
                    <Link href={'https://ncert.nic.in'} title={'NCERT'} target={'_blank'} rel={'noreferrer'} />
                    <Link href={'https://upsc.gov.in'} title={'UPSC'} target={'_blank'} rel={'noreferrer'} />
                    <Link href={'https://indianairforce.nic.in'} title={'Hover This Link'} target={'_blank'} rel={'noreferrer'} />
                </div>
            </div>
        );
    }
}

export default Body;
